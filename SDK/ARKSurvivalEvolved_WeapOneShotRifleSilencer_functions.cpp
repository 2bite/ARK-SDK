// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapOneShotRifleSilencer_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapOneShotRifleSilencer.WeapOneShotRifleSilencer_C.UserConstructionScript
// ()

void AWeapOneShotRifleSilencer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapOneShotRifleSilencer.WeapOneShotRifleSilencer_C.UserConstructionScript");

	AWeapOneShotRifleSilencer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapOneShotRifleSilencer.WeapOneShotRifleSilencer_C.ExecuteUbergraph_WeapOneShotRifleSilencer
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapOneShotRifleSilencer_C::ExecuteUbergraph_WeapOneShotRifleSilencer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapOneShotRifleSilencer.WeapOneShotRifleSilencer_C.ExecuteUbergraph_WeapOneShotRifleSilencer");

	AWeapOneShotRifleSilencer_C_ExecuteUbergraph_WeapOneShotRifleSilencer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
