// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_Polymer_Organic_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_Polymer_Organic.PrimalItemResource_Polymer_Organic_C.ExecuteUbergraph_PrimalItemResource_Polymer_Organic
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_Polymer_Organic_C::ExecuteUbergraph_PrimalItemResource_Polymer_Organic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_Polymer_Organic.PrimalItemResource_Polymer_Organic_C.ExecuteUbergraph_PrimalItemResource_Polymer_Organic");

	UPrimalItemResource_Polymer_Organic_C_ExecuteUbergraph_PrimalItemResource_Polymer_Organic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
