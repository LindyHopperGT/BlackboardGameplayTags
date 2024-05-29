// Copyright https://github.com/MothCocoon/FlowGraph/graphs/contributors

#include "BlackboardGameplayTagFunctionLibrary.h"
#include "BehaviorTree/BTFunctionLibrary.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BlackboardKeyTypeExt_GameplayTagContainer.h"
#include "BlackboardKeyTypeExt_GameplayTag.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(BlackboardGameplayTagFunctionLibrary)

FGameplayTag UBlackboardGameplayTagFunctionLibrary::GetValueAsGameplayTag(const UBlackboardComponent* BlackboardComp, const FName& Key)
{
	return BlackboardComp ? BlackboardComp->GetValue<UBlackboardKeyTypeExt_GameplayTag>(Key) : FGameplayTag::EmptyTag;
}
	
void UBlackboardGameplayTagFunctionLibrary::SetValueAsGameplayTag(UBlackboardComponent* BlackboardComp, const FName& Key, FGameplayTag Value)
{
	if (IsValid(BlackboardComp))
	{
		BlackboardComp->SetValue<UBlackboardKeyTypeExt_GameplayTag>(Key, Value);
	}
}

FGameplayTagContainer UBlackboardGameplayTagFunctionLibrary::GetValueAsGameplayTagContainer(const UBlackboardComponent* BlackboardComp, const FName& Key)
{
	return BlackboardComp ? BlackboardComp->GetValue<UBlackboardKeyTypeExt_GameplayTagContainer>(Key) : FGameplayTagContainer::EmptyContainer;
}
	
void UBlackboardGameplayTagFunctionLibrary::SetValueAsGameplayTagContainer(UBlackboardComponent* BlackboardComp, const FName& Key, FGameplayTagContainer Value)
{
	if (IsValid(BlackboardComp))
	{
		BlackboardComp->SetValue<UBlackboardKeyTypeExt_GameplayTagContainer>(Key, Value);
	}
}

FGameplayTag UBlackboardGameplayTagFunctionLibrary::GetBlackboardValueAsGameplayTag(UBTNode* NodeOwner, const FBlackboardKeySelector& Key)
{
	UBlackboardComponent* BlackboardComp = UBTFunctionLibrary::GetOwnersBlackboard(NodeOwner);

	return BlackboardComp ? BlackboardComp->GetValue<UBlackboardKeyTypeExt_GameplayTag>(Key.SelectedKeyName) : FGameplayTag::EmptyTag;
}

void UBlackboardGameplayTagFunctionLibrary::SetBlackboardValueAsGameplayTag(UBTNode* NodeOwner, const FBlackboardKeySelector& Key, FGameplayTag Value)
{
	if (UBlackboardComponent* BlackboardComp = UBTFunctionLibrary::GetOwnersBlackboard(NodeOwner))
	{
		BlackboardComp->SetValue<UBlackboardKeyTypeExt_GameplayTag>(Key.SelectedKeyName, Value);
	}
}

void UBlackboardGameplayTagFunctionLibrary::AddGameplayTagFilter(FBlackboardKeySelector& InSelector, UObject* Owner, FName PropertyName)
{
	const FString FilterName = PropertyName.ToString() + TEXT("_Name");
	InSelector.AllowedTypes.Add(NewObject<UBlackboardKeyTypeExt_GameplayTag>(Owner, *FilterName));
}


FGameplayTagContainer UBlackboardGameplayTagFunctionLibrary::GetBlackboardValueAsGameplayTagContainer(UBTNode* NodeOwner, const FBlackboardKeySelector& Key)
{
	UBlackboardComponent* BlackboardComp = UBTFunctionLibrary::GetOwnersBlackboard(NodeOwner);

	return BlackboardComp ? BlackboardComp->GetValue<UBlackboardKeyTypeExt_GameplayTagContainer>(Key.SelectedKeyName) : FGameplayTagContainer::EmptyContainer;
}

void UBlackboardGameplayTagFunctionLibrary::SetBlackboardValueAsGameplayTagContainer(UBTNode* NodeOwner, const FBlackboardKeySelector& Key, FGameplayTagContainer Value)
{
	if (UBlackboardComponent* BlackboardComp = UBTFunctionLibrary::GetOwnersBlackboard(NodeOwner))
	{
		BlackboardComp->SetValue<UBlackboardKeyTypeExt_GameplayTagContainer>(Key.SelectedKeyName, Value);
	}
}

void UBlackboardGameplayTagFunctionLibrary::AddGameplayTagContainerFilter(FBlackboardKeySelector& InSelector, UObject* Owner, FName PropertyName)
{
	const FString FilterName = PropertyName.ToString() + TEXT("_Name");
	InSelector.AllowedTypes.Add(NewObject<UBlackboardKeyTypeExt_GameplayTagContainer>(Owner, *FilterName));
}