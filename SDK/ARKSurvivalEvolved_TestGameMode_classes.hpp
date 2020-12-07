#pragma once

// ARKSurvivalEvolved (318.14) SDK

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
// 0x0032 (0x2F7A - 0x2F48)
class ATestGameMode_C : public AShooterGameMode
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x2F48(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ActiveEventBuffClass;                                     // 0x2F50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AShooterCharacter*                           K2Node_CustomEvent_TheShooterCharacter;                   // 0x2F58(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalBuff*                                 CallFunc_StaticAddBuff_ReturnValue;                       // 0x2F60(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AGameState*                                  CallFunc_GetGameState_ReturnValue;                        // 0x2F68(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterGameState*                           K2Node_DynamicCast_AsShooterGameState;                    // 0x2F70(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x2F78(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchName_CmpSuccess;                             // 0x2F79(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TestGameMode.TestGameMode_C");
		return ptr;
	}


	void BPPreSpawnedDino(class APrimalDinoCharacter** theDino);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnShooterCharacterSpawned_Event(class AShooterCharacter* TheShooterCharacter);
	void ExecuteUbergraph_TestGameMode(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
