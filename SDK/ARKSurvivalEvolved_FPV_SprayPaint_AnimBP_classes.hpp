#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FPV_SprayPaint_AnimBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass FPV_SprayPaint_AnimBP.FPV_SprayPaint_AnimBP_C
// 0x0000 (0x1218 - 0x1218)
class UFPV_SprayPaint_AnimBP_C : public UFPVWeaponAnimBP_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass FPV_SprayPaint_AnimBP.FPV_SprayPaint_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_FPV_SprayPaint_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
