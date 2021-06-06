// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_FracturedGem_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_FracturedGem.PrimalItemResource_FracturedGem_C.ExecuteUbergraph_PrimalItemResource_FracturedGem
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_FracturedGem_C::ExecuteUbergraph_PrimalItemResource_FracturedGem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_FracturedGem.PrimalItemResource_FracturedGem_C.ExecuteUbergraph_PrimalItemResource_FracturedGem");

	UPrimalItemResource_FracturedGem_C_ExecuteUbergraph_PrimalItemResource_FracturedGem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
