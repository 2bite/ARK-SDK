// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapBaseHatchet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapBaseHatchet.WeapBaseHatchet_C.UserConstructionScript
// ()

void AWeapBaseHatchet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapBaseHatchet.WeapBaseHatchet_C.UserConstructionScript");

	AWeapBaseHatchet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapBaseHatchet.WeapBaseHatchet_C.ExecuteUbergraph_WeapBaseHatchet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapBaseHatchet_C::ExecuteUbergraph_WeapBaseHatchet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapBaseHatchet.WeapBaseHatchet_C.ExecuteUbergraph_WeapBaseHatchet");

	AWeapBaseHatchet_C_ExecuteUbergraph_WeapBaseHatchet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
