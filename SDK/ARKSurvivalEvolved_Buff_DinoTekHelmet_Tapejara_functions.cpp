// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_DinoTekHelmet_Tapejara_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_DinoTekHelmet_Tapejara.Buff_DinoTekHelmet_Tapejara_C.UserConstructionScript
// ()

void ABuff_DinoTekHelmet_Tapejara_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DinoTekHelmet_Tapejara.Buff_DinoTekHelmet_Tapejara_C.UserConstructionScript");

	ABuff_DinoTekHelmet_Tapejara_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DinoTekHelmet_Tapejara.Buff_DinoTekHelmet_Tapejara_C.ExecuteUbergraph_Buff_DinoTekHelmet_Tapejara
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DinoTekHelmet_Tapejara_C::ExecuteUbergraph_Buff_DinoTekHelmet_Tapejara(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DinoTekHelmet_Tapejara.Buff_DinoTekHelmet_Tapejara_C.ExecuteUbergraph_Buff_DinoTekHelmet_Tapejara");

	ABuff_DinoTekHelmet_Tapejara_C_ExecuteUbergraph_Buff_DinoTekHelmet_Tapejara_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
