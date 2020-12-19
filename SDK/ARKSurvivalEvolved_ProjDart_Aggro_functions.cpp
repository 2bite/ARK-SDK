// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjDart_Aggro_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjDart_Aggro.ProjDart_Aggro_C.UserConstructionScript
// ()

void AProjDart_Aggro_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjDart_Aggro.ProjDart_Aggro_C.UserConstructionScript");

	AProjDart_Aggro_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjDart_Aggro.ProjDart_Aggro_C.ExecuteUbergraph_ProjDart_Aggro
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjDart_Aggro_C::ExecuteUbergraph_ProjDart_Aggro(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjDart_Aggro.ProjDart_Aggro_C.ExecuteUbergraph_ProjDart_Aggro");

	AProjDart_Aggro_C_ExecuteUbergraph_ProjDart_Aggro_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
