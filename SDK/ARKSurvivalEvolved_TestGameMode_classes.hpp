#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TestGameMode_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TestGameMode.TestGameMode_C
// 0x004A (0x313A - 0x30F0)
class ATestGameMode_C : public AShooterGameMode
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x30F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ActiveEventBuffClass;                                     // 0x30F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTimedEventActorIsActive;                                 // 0x3100(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x3101(0x0007) MISSED OFFSET
	class UClass*                                      ActiveEventTimedSpawnActor;                               // 0x3108(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              K2Node_Event_DeltaSeconds;                                // 0x3110(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x3114(0x0004) MISSED OFFSET
	class AShooterCharacter*                           K2Node_CustomEvent_TheShooterCharacter;                   // 0x3118(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalBuff*                                 CallFunc_StaticAddBuff_ReturnValue;                       // 0x3120(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AGameState*                                  CallFunc_GetGameState_ReturnValue;                        // 0x3128(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterGameState*                           K2Node_DynamicCast_AsShooterGameState;                    // 0x3130(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x3138(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchName_CmpSuccess;                             // 0x3139(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TestGameMode.TestGameMode_C");
		return ptr;
	}


	void BPPreSpawnedDino(class APrimalDinoCharacter** theDino);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnShooterCharacterSpawned_Event(class AShooterCharacter* TheShooterCharacter);
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_TestGameMode(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
