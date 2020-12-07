// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CrystalWyvProjWater_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CrystalWyvProjWater.CrystalWyvProjWater_C.UserConstructionScript
// ()

void ACrystalWyvProjWater_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalWyvProjWater.CrystalWyvProjWater_C.UserConstructionScript");

	ACrystalWyvProjWater_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CrystalWyvProjWater.CrystalWyvProjWater_C.ExecuteUbergraph_CrystalWyvProjWater
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACrystalWyvProjWater_C::ExecuteUbergraph_CrystalWyvProjWater(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalWyvProjWater.CrystalWyvProjWater_C.ExecuteUbergraph_CrystalWyvProjWater");

	ACrystalWyvProjWater_C_ExecuteUbergraph_CrystalWyvProjWater_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
