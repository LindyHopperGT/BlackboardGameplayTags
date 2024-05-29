// Copyright https://github.com/MothCocoon/FlowGraph/graphs/contributors

#include "BlackboardKeyTypeExt_GameplayTag.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(BlackboardKeyTypeExt_GameplayTag)

const UBlackboardKeyTypeExt_GameplayTag::FDataType UBlackboardKeyTypeExt_GameplayTag::InvalidValue = FGameplayTag::EmptyTag;

UBlackboardKeyTypeExt_GameplayTag::UBlackboardKeyTypeExt_GameplayTag(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	ValueSize = sizeof(FGameplayTag);
	SupportedOp = EBlackboardKeyOperation::Text;
}

FGameplayTag UBlackboardKeyTypeExt_GameplayTag::GetValue(const UBlackboardKeyTypeExt_GameplayTag* KeyOb, const uint8* RawData)
{
	return GetValueFromMemory<FGameplayTag>(RawData);
}

bool UBlackboardKeyTypeExt_GameplayTag::SetValue(UBlackboardKeyTypeExt_GameplayTag* KeyOb, uint8* RawData, const FGameplayTag& Value)
{
	return SetValueInMemory<FGameplayTag>(RawData, Value);
}

EBlackboardCompare::Type UBlackboardKeyTypeExt_GameplayTag::CompareValues(const UBlackboardComponent& OwnerComp, const uint8* MemoryBlock,
	const UBlackboardKeyType* OtherKeyOb, const uint8* OtherMemoryBlock) const
{
	const FGameplayTag MyValue = GetValue(this, MemoryBlock);
	const FGameplayTag OtherValue = GetValue((UBlackboardKeyTypeExt_GameplayTag*)OtherKeyOb, OtherMemoryBlock);

	return (MyValue == OtherValue) ? EBlackboardCompare::Equal : EBlackboardCompare::NotEqual;
}

FString UBlackboardKeyTypeExt_GameplayTag::DescribeValue(const UBlackboardComponent& OwnerComp, const uint8* RawData) const
{
	return GetValue(this, RawData).ToString();
}

bool UBlackboardKeyTypeExt_GameplayTag::TestTextOperation(const UBlackboardComponent& OwnerComp, const uint8* MemoryBlock, ETextKeyOperation::Type Op, const FString& OtherString) const
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

bool UBlackboardKeyTypeExt_GameplayTag::TestBasicOperation(const UBlackboardComponent& OwnerComp,
	const uint8* MemoryBlock, EBasicKeyOperation::Type Op) const
{
	if (MemoryBlock == nullptr)
	{
		return false;
	}

	const FGameplayTag Tag = GetValueFromMemory<FGameplayTag>(MemoryBlock);
	return (Op == EBasicKeyOperation::Set) ? Tag != FGameplayTag::EmptyTag : Tag == FGameplayTag::EmptyTag;
}

void UBlackboardKeyTypeExt_GameplayTag::CopyValues(UBlackboardComponent& OwnerComp, uint8* MemoryBlock, const UBlackboardKeyType* SourceKeyOb, const uint8* SourceBlock)
{
	const UBlackboardKeyTypeExt_GameplayTag* GameplayTagSourceKeyOb = Cast<const UBlackboardKeyTypeExt_GameplayTag>(SourceKeyOb);
	if (GameplayTagSourceKeyOb != nullptr)
	{
		SetValue(this, MemoryBlock, GetValue(GameplayTagSourceKeyOb, SourceBlock));
	}
}

void UBlackboardKeyTypeExt_GameplayTag::InitializeMemory(UBlackboardComponent& OwnerComp, uint8* MemoryBlock)
{
	SetValue(this, MemoryBlock, InvalidValue);
}

void UBlackboardKeyTypeExt_GameplayTag::Clear(UBlackboardComponent& OwnerComp, uint8* MemoryBlock)
{
	SetValue(this, MemoryBlock, InvalidValue);
}

bool UBlackboardKeyTypeExt_GameplayTag::IsEmpty(const UBlackboardComponent& OwnerComp, const uint8* MemoryBlock) const
{
	const FDataType Tag = GetValue(this, MemoryBlock);

	return Tag == FGameplayTag::EmptyTag;
}
