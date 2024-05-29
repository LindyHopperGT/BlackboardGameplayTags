// Copyright https://github.com/MothCocoon/FlowGraph/graphs/contributors

#pragma once

#include "GameplayTagContainer.h"
#include "UObject/ObjectMacros.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BlackboardGameplayTagFunctionLibrary.generated.h"

class AActor;
class UBehaviorTreeComponent;
class UBlackboardComponent;
class UBTNode;

UCLASS()
class BLACKBOARDGAMEPLAYTAGS_API UBlackboardGameplayTagFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure, BlueprintAuthorityOnly, Category="AI|Components|Blackboard")
	static FGameplayTag GetValueAsGameplayTag(const UBlackboardComponent* BlackboardComp, const FName& Key);
	
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="AI|Components|Blackboard")
	static void SetValueAsGameplayTag(UBlackboardComponent* BlackboardComp, const FName& Key, FGameplayTag Value);
	
	UFUNCTION(BlueprintPure, BlueprintAuthorityOnly, Category="AI|Components|Blackboard")
	static FGameplayTagContainer GetValueAsGameplayTagContainer(const UBlackboardComponent* BlackboardComp, const FName& Key);
	
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="AI|Components|Blackboard")
	static void SetValueAsGameplayTagContainer(UBlackboardComponent* BlackboardComp, const FName& Key, FGameplayTagContainer Value);
	
	UFUNCTION(BlueprintPure, BlueprintAuthorityOnly, Category="AI|BehaviorTree", Meta=(HidePin="NodeOwner", DefaultToSelf="NodeOwner"))
	static FGameplayTag GetBlackboardValueAsGameplayTag(UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
	
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="AI|BehaviorTree", Meta=(HidePin="NodeOwner", DefaultToSelf="NodeOwner"))
	static void SetBlackboardValueAsGameplayTag(UBTNode* NodeOwner, const FBlackboardKeySelector& Key, FGameplayTag Value);
	
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="AI|BehaviorTree", Meta=(HidePin="NodeOwner", DefaultToSelf="NodeOwner"))
	static void AddGameplayTagFilter(FBlackboardKeySelector& InSelector, UObject* Owner, FName PropertyName);

	UFUNCTION(BlueprintPure, BlueprintAuthorityOnly, Category="AI|BehaviorTree", Meta=(HidePin="NodeOwner", DefaultToSelf="NodeOwner"))
	static FGameplayTagContainer GetBlackboardValueAsGameplayTagContainer(UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
	
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="AI|BehaviorTree", Meta=(HidePin="NodeOwner", DefaultToSelf="NodeOwner"))
	static void SetBlackboardValueAsGameplayTagContainer(UBTNode* NodeOwner, const FBlackboardKeySelector& Key, FGameplayTagContainer Value);
	
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="AI|BehaviorTree", Meta=(HidePin="NodeOwner", DefaultToSelf="NodeOwner"))
	static void AddGameplayTagContainerFilter(FBlackboardKeySelector& InSelector, UObject* Owner, FName PropertyName);
};
