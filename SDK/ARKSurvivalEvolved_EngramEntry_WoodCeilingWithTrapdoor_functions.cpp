// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_WoodCeilingWithTrapdoor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_WoodCeilingWithTrapdoor.EngramEntry_WoodCeilingWithTrapdoor_C.ExecuteUbergraph_EngramEntry_WoodCeilingWithTrapdoor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_WoodCeilingWithTrapdoor_C::ExecuteUbergraph_EngramEntry_WoodCeilingWithTrapdoor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_WoodCeilingWithTrapdoor.EngramEntry_WoodCeilingWithTrapdoor_C.ExecuteUbergraph_EngramEntry_WoodCeilingWithTrapdoor");

	UEngramEntry_WoodCeilingWithTrapdoor_C_ExecuteUbergraph_EngramEntry_WoodCeilingWithTrapdoor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
