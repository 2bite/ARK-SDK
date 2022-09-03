#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MainMenuGameMode_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MainMenuGameMode.MainMenuGameMode_C
// 0x0008 (0x05B0 - 0x05A8)
class AMainMenuGameMode_C : public AShooterGame_Menu
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x05A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MainMenuGameMode.MainMenuGameMode_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_MainMenuGameMode(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
