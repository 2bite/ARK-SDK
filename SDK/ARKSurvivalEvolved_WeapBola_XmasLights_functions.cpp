// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapBola_XmasLights_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapBola_XmasLights.WeapBola_XmasLights_C.UserConstructionScript
// ()

void AWeapBola_XmasLights_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapBola_XmasLights.WeapBola_XmasLights_C.UserConstructionScript");

	AWeapBola_XmasLights_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapBola_XmasLights.WeapBola_XmasLights_C.ExecuteUbergraph_WeapBola_XmasLights
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapBola_XmasLights_C::ExecuteUbergraph_WeapBola_XmasLights(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapBola_XmasLights.WeapBola_XmasLights_C.ExecuteUbergraph_WeapBola_XmasLights");

	AWeapBola_XmasLights_C_ExecuteUbergraph_WeapBola_XmasLights_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
