// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_WoodDoor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_WoodDoor.EngramEntry_WoodDoor_C.ExecuteUbergraph_EngramEntry_WoodDoor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_WoodDoor_C::ExecuteUbergraph_EngramEntry_WoodDoor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_WoodDoor.EngramEntry_WoodDoor_C.ExecuteUbergraph_EngramEntry_WoodDoor");

	UEngramEntry_WoodDoor_C_ExecuteUbergraph_EngramEntry_WoodDoor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
