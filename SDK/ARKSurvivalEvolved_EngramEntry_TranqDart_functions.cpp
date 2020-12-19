// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_TranqDart_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_TranqDart.EngramEntry_TranqDart_C.ExecuteUbergraph_EngramEntry_TranqDart
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_TranqDart_C::ExecuteUbergraph_EngramEntry_TranqDart(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_TranqDart.EngramEntry_TranqDart_C.ExecuteUbergraph_EngramEntry_TranqDart");

	UEngramEntry_TranqDart_C_ExecuteUbergraph_EngramEntry_TranqDart_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
