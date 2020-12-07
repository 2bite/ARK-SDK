// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Canteen_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Canteen.EngramEntry_Canteen_C.ExecuteUbergraph_EngramEntry_Canteen
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Canteen_C::ExecuteUbergraph_EngramEntry_Canteen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Canteen.EngramEntry_Canteen_C.ExecuteUbergraph_EngramEntry_Canteen");

	UEngramEntry_Canteen_C_ExecuteUbergraph_EngramEntry_Canteen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
