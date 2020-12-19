// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapStoneHatchet_Santiago_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapStoneHatchet_Santiago.WeapStoneHatchet_Santiago_C.UserConstructionScript
// ()

void AWeapStoneHatchet_Santiago_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapStoneHatchet_Santiago.WeapStoneHatchet_Santiago_C.UserConstructionScript");

	AWeapStoneHatchet_Santiago_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapStoneHatchet_Santiago.WeapStoneHatchet_Santiago_C.ExecuteUbergraph_WeapStoneHatchet_Santiago
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapStoneHatchet_Santiago_C::ExecuteUbergraph_WeapStoneHatchet_Santiago(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapStoneHatchet_Santiago.WeapStoneHatchet_Santiago_C.ExecuteUbergraph_WeapStoneHatchet_Santiago");

	AWeapStoneHatchet_Santiago_C_ExecuteUbergraph_WeapStoneHatchet_Santiago_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
