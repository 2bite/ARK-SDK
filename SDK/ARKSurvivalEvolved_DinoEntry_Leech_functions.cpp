// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Leech_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Leech.DinoEntry_Leech_C.ExecuteUbergraph_DinoEntry_Leech
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Leech_C::ExecuteUbergraph_DinoEntry_Leech(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Leech.DinoEntry_Leech_C.ExecuteUbergraph_DinoEntry_Leech");

	UDinoEntry_Leech_C_ExecuteUbergraph_DinoEntry_Leech_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
