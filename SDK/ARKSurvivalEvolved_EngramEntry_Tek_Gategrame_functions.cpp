// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Tek_Gategrame_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Tek_Gategrame.EngramEntry_Tek_Gategrame_C.ExecuteUbergraph_EngramEntry_Tek_Gategrame
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Tek_Gategrame_C::ExecuteUbergraph_EngramEntry_Tek_Gategrame(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Tek_Gategrame.EngramEntry_Tek_Gategrame_C.ExecuteUbergraph_EngramEntry_Tek_Gategrame");

	UEngramEntry_Tek_Gategrame_C_ExecuteUbergraph_EngramEntry_Tek_Gategrame_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
