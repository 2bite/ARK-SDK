// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapHatchet_Impacts_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapHatchet_Impacts.WeapHatchet_Impacts_C.UserConstructionScript
// ()

void AWeapHatchet_Impacts_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapHatchet_Impacts.WeapHatchet_Impacts_C.UserConstructionScript");

	AWeapHatchet_Impacts_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapHatchet_Impacts.WeapHatchet_Impacts_C.ExecuteUbergraph_WeapHatchet_Impacts
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapHatchet_Impacts_C::ExecuteUbergraph_WeapHatchet_Impacts(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapHatchet_Impacts.WeapHatchet_Impacts_C.ExecuteUbergraph_WeapHatchet_Impacts");

	AWeapHatchet_Impacts_C_ExecuteUbergraph_WeapHatchet_Impacts_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
