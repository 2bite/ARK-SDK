// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Hesperornis_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Hesperornis.DinoEntry_Hesperornis_C.ExecuteUbergraph_DinoEntry_Hesperornis
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Hesperornis_C::ExecuteUbergraph_DinoEntry_Hesperornis(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Hesperornis.DinoEntry_Hesperornis_C.ExecuteUbergraph_DinoEntry_Hesperornis");

	UDinoEntry_Hesperornis_C_ExecuteUbergraph_DinoEntry_Hesperornis_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
