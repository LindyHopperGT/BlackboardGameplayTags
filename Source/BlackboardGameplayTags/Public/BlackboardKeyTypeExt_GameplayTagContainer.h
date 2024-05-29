// Copyright https://github.com/MothCocoon/FlowGraph/graphs/contributors

#pragma once

#include "UObject/ObjectMacros.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "GameplayTagContainer.h"
#include "BlackboardKeyTypeExt_GameplayTagContainer.generated.h"

class UBlackboardComponent;

UCLASS(EditInlineNew, meta=(DisplayName="GameplayTagContainer"))
class BLACKBOARDGAMEPLAYTAGS_API UBlackboardKeyTypeExt_GameplayTagContainer : public UBlackboardKeyType
{
	GENERATED_UCLASS_BODY()

	typedef FGameplayTagContainer FDataType;
	static const FDataType InvalidValue;

	static FGameplayTagContainer GetValue(const UBlackboardKeyTypeExt_GameplayTagContainer* KeyOb, const uint8* RawData);
	static bool SetValue(UBlackboardKeyTypeExt_GameplayTagContainer* KeyOb, uint8* RawData, const FGameplayTagContainer& Value);

	virtual EBlackboardCompare::Type CompareValues(const UBlackboardComponent& OwnerComp, const uint8* MemoryBlock,
		const UBlackboardKeyType* OtherKeyOb, const uint8* OtherMemoryBlock) const override;

protected:
	virtual FString DescribeValue(const UBlackboardComponent& OwnerComp, const uint8* RawData) const override;
	virtual bool TestTextOperation(const UBlackboardComponent& OwnerComp, const uint8* MemoryBlock, ETextKeyOperation::Type Op, const FString& OtherString) const override;
	virtual bool TestBasicOperation(const UBlackboardComponent& OwnerComp, const uint8* MemoryBlock, EBasicKeyOperation::Type Op) const override;
	virtual void CopyValues(UBlackboardComponent& OwnerComp, uint8* MemoryBlock, const UBlackboardKeyType* SourceKeyOb, const uint8* SourceBlock) override;
	virtual void InitializeMemory(UBlackboardComponent& OwnerComp, uint8* MemoryBlock) override;
	virtual void Clear(UBlackboardComponent& OwnerComp, uint8* MemoryBlock) override;
	virtual bool IsEmpty(const UBlackboardComponent& OwnerComp, const uint8* MemoryBlock) const override;
};
