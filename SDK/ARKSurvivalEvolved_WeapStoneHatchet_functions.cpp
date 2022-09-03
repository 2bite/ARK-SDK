// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapStoneHatchet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapStoneHatchet.WeapStoneHatchet_C.UserConstructionScript
// ()

void AWeapStoneHatchet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapStoneHatchet.WeapStoneHatchet_C.UserConstructionScript");

	AWeapStoneHatchet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapStoneHatchet.WeapStoneHatchet_C.ExecuteUbergraph_WeapStoneHatchet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapStoneHatchet_C::ExecuteUbergraph_WeapStoneHatchet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapStoneHatchet.WeapStoneHatchet_C.ExecuteUbergraph_WeapStoneHatchet");

	AWeapStoneHatchet_C_ExecuteUbergraph_WeapStoneHatchet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
