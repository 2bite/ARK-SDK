// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Manta_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Manta.DinoEntry_Manta_C.ExecuteUbergraph_DinoEntry_Manta
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Manta_C::ExecuteUbergraph_DinoEntry_Manta(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Manta.DinoEntry_Manta_C.ExecuteUbergraph_DinoEntry_Manta");

	UDinoEntry_Manta_C_ExecuteUbergraph_DinoEntry_Manta_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
