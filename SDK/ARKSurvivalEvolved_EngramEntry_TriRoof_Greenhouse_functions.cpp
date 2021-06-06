// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_TriRoof_Greenhouse_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_TriRoof_Greenhouse.EngramEntry_TriRoof_Greenhouse_C.ExecuteUbergraph_EngramEntry_TriRoof_Greenhouse
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_TriRoof_Greenhouse_C::ExecuteUbergraph_EngramEntry_TriRoof_Greenhouse(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_TriRoof_Greenhouse.EngramEntry_TriRoof_Greenhouse_C.ExecuteUbergraph_EngramEntry_TriRoof_Greenhouse");

	UEngramEntry_TriRoof_Greenhouse_C_ExecuteUbergraph_EngramEntry_TriRoof_Greenhouse_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
