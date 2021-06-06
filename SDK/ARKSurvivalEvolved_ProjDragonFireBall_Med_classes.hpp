#pragma once

// ARKSurvivalEvolved (329.9) SDK

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
// 0x0000 (0x0678 - 0x0678)
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
