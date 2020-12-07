// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_GPS_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_GPS.EngramEntry_GPS_C.ExecuteUbergraph_EngramEntry_GPS
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_GPS_C::ExecuteUbergraph_EngramEntry_GPS(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_GPS.EngramEntry_GPS_C.ExecuteUbergraph_EngramEntry_GPS");

	UEngramEntry_GPS_C_ExecuteUbergraph_EngramEntry_GPS_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
