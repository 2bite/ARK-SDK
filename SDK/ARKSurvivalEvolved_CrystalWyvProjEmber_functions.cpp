// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CrystalWyvProjEmber_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CrystalWyvProjEmber.CrystalWyvProjEmber_C.UserConstructionScript
// ()

void ACrystalWyvProjEmber_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalWyvProjEmber.CrystalWyvProjEmber_C.UserConstructionScript");

	ACrystalWyvProjEmber_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CrystalWyvProjEmber.CrystalWyvProjEmber_C.ExecuteUbergraph_CrystalWyvProjEmber
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACrystalWyvProjEmber_C::ExecuteUbergraph_CrystalWyvProjEmber(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalWyvProjEmber.CrystalWyvProjEmber_C.ExecuteUbergraph_CrystalWyvProjEmber");

	ACrystalWyvProjEmber_C_ExecuteUbergraph_CrystalWyvProjEmber_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
