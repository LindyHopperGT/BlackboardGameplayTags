// Copyright https://github.com/MothCocoon/FlowGraph/graphs/contributors

#include "BlackboardKeyTypeExt_GameplayTagContainer.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(BlackboardKeyTypeExt_GameplayTagContainer)

const UBlackboardKeyTypeExt_GameplayTagContainer::FDataType UBlackboardKeyTypeExt_GameplayTagContainer::InvalidValue = FGameplayTagContainer::EmptyContainer;

UBlackboardKeyTypeExt_GameplayTagContainer::UBlackboardKeyTypeExt_GameplayTagContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	ValueSize = sizeof(FGameplayTagContainer);
	SupportedOp = EBlackboardKeyOperation::Text;
}

FGameplayTagContainer UBlackboardKeyTypeExt_GameplayTagContainer::GetValue(const UBlackboardKeyTypeExt_GameplayTagContainer* KeyOb, const uint8* RawData)
{
	return GetValueFromMemory<FGameplayTagContainer>(RawData);
}

bool UBlackboardKeyTypeExt_GameplayTagContainer::SetValue(UBlackboardKeyTypeExt_GameplayTagContainer* KeyOb, uint8* RawData, const FGameplayTagContainer& Value)
{
	return SetValueInMemory<FGameplayTagContainer>(RawData, Value);
}

EBlackboardCompare::Type UBlackboardKeyTypeExt_GameplayTagContainer::CompareValues(const UBlackboardComponent& OwnerComp, const uint8* MemoryBlock,
	const UBlackboardKeyType* OtherKeyOb, const uint8* OtherMemoryBlock) const
{
	const FGameplayTagContainer MyValue = GetValue(this, MemoryBlock);
	const FGameplayTagContainer OtherValue = GetValue((UBlackboardKeyTypeExt_GameplayTagContainer*)OtherKeyOb, OtherMemoryBlock);

	return (MyValue.HasAll(OtherValue) ? EBlackboardCompare::Equal : EBlackboardCompare::NotEqual);
}

FString UBlackboardKeyTypeExt_GameplayTagContainer::DescribeValue(const UBlackboardComponent& OwnerComp, const uint8* RawData) const
{
	const FGameplayTagContainer CurrentValue = GetValue(this, RawData);
	if (CurrentValue.IsEmpty())
	{
		static const FString EmptyContainer = TEXT("Empty");
		return EmptyContainer;
	}
	return CurrentValue.ToStringSimple();
}

bool UBlackboardKeyTypeExt_GameplayTagContainer::TestTextOperation(const UBlackboardComponent& OwnerComp, const uint8* MemoryBlock, ETextKeyOperation::Type Op, const FString& OtherString) const
{
	const FString Value = GetValue(this, MemoryBlock).ToString();
	switch (Op)
	{
	case ETextKeyOperation::Equal:			return (Value == OtherString);
	case ETextKeyOperation::NotEqual:		return (Value != OtherString);
	case ETextKeyOperation::Contain:		return (Value.Contains(OtherString) == true);
	case ETextKeyOperation::NotContain:		return (Value.Contains(OtherString) == false);
	default: break;
	}

	return false;
}

bool UBlackboardKeyTypeExt_GameplayTagContainer::TestBasicOperation(const UBlackboardComponent& OwnerComp,
	const uint8* MemoryBlock, EBasicKeyOperation::Type Op) const
{
	if (MemoryBlock == nullptr)
	{
		return false;
	}

	const FGameplayTagContainer Container = GetValueFromMemory<FGameplayTagContainer>(MemoryBlock);
	return (Op == EBasicKeyOperation::Set) ? Container.Num() > 0 : Container.IsEmpty();
}

void UBlackboardKeyTypeExt_GameplayTagContainer::CopyValues(UBlackboardComponent& OwnerComp, uint8* MemoryBlock, const UBlackboardKeyType* SourceKeyOb, const uint8* SourceBlock)
{
	const UBlackboardKeyTypeExt_GameplayTagContainer* GameplayTagSourceKeyOb = Cast<const UBlackboardKeyTypeExt_GameplayTagContainer>(SourceKeyOb);
	if (GameplayTagSourceKeyOb != nullptr)
	{
		SetValue(this, MemoryBlock, GetValue(GameplayTagSourceKeyOb, SourceBlock));
	}
}

void UBlackboardKeyTypeExt_GameplayTagContainer::InitializeMemory(UBlackboardComponent& OwnerComp, uint8* MemoryBlock)
{
	SetValue(this, MemoryBlock, InvalidValue);
}

void UBlackboardKeyTypeExt_GameplayTagContainer::Clear(UBlackboardComponent& OwnerComp, uint8* MemoryBlock)
{
	SetValue(this, MemoryBlock, InvalidValue);
}

bool UBlackboardKeyTypeExt_GameplayTagContainer::IsEmpty(const UBlackboardComponent& OwnerComp, const uint8* MemoryBlock) const
{
	const FDataType TagContainer = GetValue(this, MemoryBlock);

	return TagContainer.IsEmpty();
}