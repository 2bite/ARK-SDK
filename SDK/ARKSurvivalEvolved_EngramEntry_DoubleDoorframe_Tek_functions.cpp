// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_DoubleDoorframe_Tek_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_DoubleDoorframe_Tek.EngramEntry_DoubleDoorframe_Tek_C.ExecuteUbergraph_EngramEntry_DoubleDoorframe_Tek
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_DoubleDoorframe_Tek_C::ExecuteUbergraph_EngramEntry_DoubleDoorframe_Tek(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_DoubleDoorframe_Tek.EngramEntry_DoubleDoorframe_Tek_C.ExecuteUbergraph_EngramEntry_DoubleDoorframe_Tek");

	UEngramEntry_DoubleDoorframe_Tek_C_ExecuteUbergraph_EngramEntry_DoubleDoorframe_Tek_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
