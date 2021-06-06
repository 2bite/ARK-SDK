#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjTekGravityGrenade_Repel_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjTekGravityGrenade_Repel.ProjTekGravityGrenade_Repel_C
// 0x0000 (0x09CA - 0x09CA)
class AProjTekGravityGrenade_Repel_C : public AProjTekGravityGrenade_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjTekGravityGrenade_Repel.ProjTekGravityGrenade_Repel_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ProjTekGravityGrenade_Repel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
