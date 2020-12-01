// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Saddle_Equus_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Saddle_Equus.EngramEntry_Saddle_Equus_C.ExecuteUbergraph_EngramEntry_Saddle_Equus
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Saddle_Equus_C::ExecuteUbergraph_EngramEntry_Saddle_Equus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Saddle_Equus.EngramEntry_Saddle_Equus_C.ExecuteUbergraph_EngramEntry_Saddle_Equus");

	UEngramEntry_Saddle_Equus_C_ExecuteUbergraph_EngramEntry_Saddle_Equus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
