#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjDragonFireBall_Med_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjDragonFireBall_Med.ProjDragonFireBall_Med_C
// 0x0000 (0x0670 - 0x0670)
class AProjDragonFireBall_Med_C : public AProjDragonFireBall_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjDragonFireBall_Med.ProjDragonFireBall_Med_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ProjDragonFireBall_Med(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
