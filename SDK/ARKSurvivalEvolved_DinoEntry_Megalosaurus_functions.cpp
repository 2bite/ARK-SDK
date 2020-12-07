// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Megalosaurus_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Megalosaurus.DinoEntry_Megalosaurus_C.ExecuteUbergraph_DinoEntry_Megalosaurus
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Megalosaurus_C::ExecuteUbergraph_DinoEntry_Megalosaurus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Megalosaurus.DinoEntry_Megalosaurus_C.ExecuteUbergraph_DinoEntry_Megalosaurus");

	UDinoEntry_Megalosaurus_C_ExecuteUbergraph_DinoEntry_Megalosaurus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
