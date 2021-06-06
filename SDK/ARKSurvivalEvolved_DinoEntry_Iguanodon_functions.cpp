// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Iguanodon_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Iguanodon.DinoEntry_Iguanodon_C.ExecuteUbergraph_DinoEntry_Iguanodon
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Iguanodon_C::ExecuteUbergraph_DinoEntry_Iguanodon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Iguanodon.DinoEntry_Iguanodon_C.ExecuteUbergraph_DinoEntry_Iguanodon");

	UDinoEntry_Iguanodon_C_ExecuteUbergraph_DinoEntry_Iguanodon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
