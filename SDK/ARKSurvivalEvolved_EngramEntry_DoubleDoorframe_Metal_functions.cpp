// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_DoubleDoorframe_Metal_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_DoubleDoorframe_Metal.EngramEntry_DoubleDoorframe_Metal_C.ExecuteUbergraph_EngramEntry_DoubleDoorframe_Metal
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_DoubleDoorframe_Metal_C::ExecuteUbergraph_EngramEntry_DoubleDoorframe_Metal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_DoubleDoorframe_Metal.EngramEntry_DoubleDoorframe_Metal_C.ExecuteUbergraph_EngramEntry_DoubleDoorframe_Metal");

	UEngramEntry_DoubleDoorframe_Metal_C_ExecuteUbergraph_EngramEntry_DoubleDoorframe_Metal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
