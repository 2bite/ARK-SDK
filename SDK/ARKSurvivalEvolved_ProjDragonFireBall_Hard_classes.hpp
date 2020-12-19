#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjDragonFireBall_Hard_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjDragonFireBall_Hard.ProjDragonFireBall_Hard_C
// 0x0000 (0x0678 - 0x0678)
class AProjDragonFireBall_Hard_C : public AProjDragonFireBall_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjDragonFireBall_Hard.ProjDragonFireBall_Hard_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ProjDragonFireBall_Hard(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
