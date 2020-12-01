#pragma once

// ARKSurvivalEvolved (301.1) SDK

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
// 0x0018 (0x2C60 - 0x2C48)
class ATestGameMode_C : public AShooterGameMode
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x2C48(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	double                                             NewVar;                                                   // 0x2C50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ActiveEventBuffClass;                                     // 0x2C58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TestGameMode.TestGameMode_C");
		return ptr;
	}


	void BPPreSpawnedDino(class APrimalDinoCharacter** theDino);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_TestGameMode(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
