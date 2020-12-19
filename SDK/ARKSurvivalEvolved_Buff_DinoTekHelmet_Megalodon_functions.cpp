// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_DinoTekHelmet_Megalodon_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_DinoTekHelmet_Megalodon.Buff_DinoTekHelmet_Megalodon_C.UserConstructionScript
// ()

void ABuff_DinoTekHelmet_Megalodon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DinoTekHelmet_Megalodon.Buff_DinoTekHelmet_Megalodon_C.UserConstructionScript");

	ABuff_DinoTekHelmet_Megalodon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DinoTekHelmet_Megalodon.Buff_DinoTekHelmet_Megalodon_C.ExecuteUbergraph_Buff_DinoTekHelmet_Megalodon
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DinoTekHelmet_Megalodon_C::ExecuteUbergraph_Buff_DinoTekHelmet_Megalodon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DinoTekHelmet_Megalodon.Buff_DinoTekHelmet_Megalodon_C.ExecuteUbergraph_Buff_DinoTekHelmet_Megalodon");

	ABuff_DinoTekHelmet_Megalodon_C_ExecuteUbergraph_Buff_DinoTekHelmet_Megalodon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
