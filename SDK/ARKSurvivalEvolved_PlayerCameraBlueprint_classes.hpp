#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PlayerCameraBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PlayerCameraBlueprint.PlayerCameraBlueprint_C
// 0x0000 (0x2008 - 0x2008)
class APlayerCameraBlueprint_C : public AShooterPlayerCameraManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerCameraBlueprint.PlayerCameraBlueprint_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_PlayerCameraBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
