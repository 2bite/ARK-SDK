// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_StoneTrapdoor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_StoneTrapdoor.EngramEntry_StoneTrapdoor_C.ExecuteUbergraph_EngramEntry_StoneTrapdoor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_StoneTrapdoor_C::ExecuteUbergraph_EngramEntry_StoneTrapdoor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_StoneTrapdoor.EngramEntry_StoneTrapdoor_C.ExecuteUbergraph_EngramEntry_StoneTrapdoor");

	UEngramEntry_StoneTrapdoor_C_ExecuteUbergraph_EngramEntry_StoneTrapdoor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
