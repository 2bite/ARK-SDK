// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_OilPump_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_OilPump.EngramEntry_OilPump_C.ExecuteUbergraph_EngramEntry_OilPump
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_OilPump_C::ExecuteUbergraph_EngramEntry_OilPump(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_OilPump.EngramEntry_OilPump_C.ExecuteUbergraph_EngramEntry_OilPump");

	UEngramEntry_OilPump_C_ExecuteUbergraph_EngramEntry_OilPump_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
