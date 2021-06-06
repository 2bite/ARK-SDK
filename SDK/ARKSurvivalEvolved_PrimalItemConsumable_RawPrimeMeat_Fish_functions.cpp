// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_RawPrimeMeat_Fish_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_RawPrimeMeat_Fish.PrimalItemConsumable_RawPrimeMeat_Fish_C.ExecuteUbergraph_PrimalItemConsumable_RawPrimeMeat_Fish
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_RawPrimeMeat_Fish_C::ExecuteUbergraph_PrimalItemConsumable_RawPrimeMeat_Fish(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_RawPrimeMeat_Fish.PrimalItemConsumable_RawPrimeMeat_Fish_C.ExecuteUbergraph_PrimalItemConsumable_RawPrimeMeat_Fish");

	UPrimalItemConsumable_RawPrimeMeat_Fish_C_ExecuteUbergraph_PrimalItemConsumable_RawPrimeMeat_Fish_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
