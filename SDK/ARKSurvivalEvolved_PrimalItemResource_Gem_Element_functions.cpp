// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_Gem_Element_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_Gem_Element.PrimalItemResource_Gem_Element_C.ExecuteUbergraph_PrimalItemResource_Gem_Element
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_Gem_Element_C::ExecuteUbergraph_PrimalItemResource_Gem_Element(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_Gem_Element.PrimalItemResource_Gem_Element_C.ExecuteUbergraph_PrimalItemResource_Gem_Element");

	UPrimalItemResource_Gem_Element_C_ExecuteUbergraph_PrimalItemResource_Gem_Element_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
