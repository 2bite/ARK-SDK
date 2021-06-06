// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_DoubleDoor_Tek_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_DoubleDoor_Tek.EngramEntry_DoubleDoor_Tek_C.ExecuteUbergraph_EngramEntry_DoubleDoor_Tek
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_DoubleDoor_Tek_C::ExecuteUbergraph_EngramEntry_DoubleDoor_Tek(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_DoubleDoor_Tek.EngramEntry_DoubleDoor_Tek_C.ExecuteUbergraph_EngramEntry_DoubleDoor_Tek");

	UEngramEntry_DoubleDoor_Tek_C_ExecuteUbergraph_EngramEntry_DoubleDoor_Tek_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
