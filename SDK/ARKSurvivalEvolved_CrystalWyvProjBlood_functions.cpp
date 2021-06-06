// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CrystalWyvProjBlood_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CrystalWyvProjBlood.CrystalWyvProjBlood_C.UserConstructionScript
// ()

void ACrystalWyvProjBlood_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalWyvProjBlood.CrystalWyvProjBlood_C.UserConstructionScript");

	ACrystalWyvProjBlood_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CrystalWyvProjBlood.CrystalWyvProjBlood_C.ExecuteUbergraph_CrystalWyvProjBlood
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACrystalWyvProjBlood_C::ExecuteUbergraph_CrystalWyvProjBlood(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalWyvProjBlood.CrystalWyvProjBlood_C.ExecuteUbergraph_CrystalWyvProjBlood");

	ACrystalWyvProjBlood_C_ExecuteUbergraph_CrystalWyvProjBlood_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
