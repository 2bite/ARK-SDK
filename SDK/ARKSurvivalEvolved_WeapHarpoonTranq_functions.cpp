// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapHarpoonTranq_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapHarpoonTranq.WeapHarpoonTranq_C.UserConstructionScript
// ()

void AWeapHarpoonTranq_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapHarpoonTranq.WeapHarpoonTranq_C.UserConstructionScript");

	AWeapHarpoonTranq_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapHarpoonTranq.WeapHarpoonTranq_C.ExecuteUbergraph_WeapHarpoonTranq
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapHarpoonTranq_C::ExecuteUbergraph_WeapHarpoonTranq(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapHarpoonTranq.WeapHarpoonTranq_C.ExecuteUbergraph_WeapHarpoonTranq");

	AWeapHarpoonTranq_C_ExecuteUbergraph_WeapHarpoonTranq_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
