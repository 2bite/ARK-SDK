// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_TransGPS_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_TransGPS.EngramEntry_TransGPS_C.ExecuteUbergraph_EngramEntry_TransGPS
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_TransGPS_C::ExecuteUbergraph_EngramEntry_TransGPS(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_TransGPS.EngramEntry_TransGPS_C.ExecuteUbergraph_EngramEntry_TransGPS");

	UEngramEntry_TransGPS_C_ExecuteUbergraph_EngramEntry_TransGPS_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
