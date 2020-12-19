// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_RefinedTranqDart_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_RefinedTranqDart.EngramEntry_RefinedTranqDart_C.ExecuteUbergraph_EngramEntry_RefinedTranqDart
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_RefinedTranqDart_C::ExecuteUbergraph_EngramEntry_RefinedTranqDart(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_RefinedTranqDart.EngramEntry_RefinedTranqDart_C.ExecuteUbergraph_EngramEntry_RefinedTranqDart");

	UEngramEntry_RefinedTranqDart_C_ExecuteUbergraph_EngramEntry_RefinedTranqDart_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
