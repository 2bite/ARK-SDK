// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_TekTransmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_TekTransmitter.EngramEntry_TekTransmitter_C.ExecuteUbergraph_EngramEntry_TekTransmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_TekTransmitter_C::ExecuteUbergraph_EngramEntry_TekTransmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_TekTransmitter.EngramEntry_TekTransmitter_C.ExecuteUbergraph_EngramEntry_TekTransmitter");

	UEngramEntry_TekTransmitter_C_ExecuteUbergraph_EngramEntry_TekTransmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
