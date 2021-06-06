// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapMetalHatchet_Santiago_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapMetalHatchet_Santiago.WeapMetalHatchet_Santiago_C.UserConstructionScript
// ()

void AWeapMetalHatchet_Santiago_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMetalHatchet_Santiago.WeapMetalHatchet_Santiago_C.UserConstructionScript");

	AWeapMetalHatchet_Santiago_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapMetalHatchet_Santiago.WeapMetalHatchet_Santiago_C.ExecuteUbergraph_WeapMetalHatchet_Santiago
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapMetalHatchet_Santiago_C::ExecuteUbergraph_WeapMetalHatchet_Santiago(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapMetalHatchet_Santiago.WeapMetalHatchet_Santiago_C.ExecuteUbergraph_WeapMetalHatchet_Santiago");

	AWeapMetalHatchet_Santiago_C_ExecuteUbergraph_WeapMetalHatchet_Santiago_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
