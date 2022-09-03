// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_RawPrimeMeat_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_RawPrimeMeat.PrimalItemConsumable_RawPrimeMeat_C.ExecuteUbergraph_PrimalItemConsumable_RawPrimeMeat
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_RawPrimeMeat_C::ExecuteUbergraph_PrimalItemConsumable_RawPrimeMeat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_RawPrimeMeat.PrimalItemConsumable_RawPrimeMeat_C.ExecuteUbergraph_PrimalItemConsumable_RawPrimeMeat");

	UPrimalItemConsumable_RawPrimeMeat_C_ExecuteUbergraph_PrimalItemConsumable_RawPrimeMeat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
